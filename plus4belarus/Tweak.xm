#import <substrate.h>

%hook DialerController

- (void)phonePad:(id)arg1 replaceLastDigitWithString:(id)arg2 {
    id dialerView = MSHookIvar<id>(self, "_dialerView");
    
    id lcdView = MSHookIvar<id>(dialerView, "_lcdView");
    
    NSString *currentText;
    currentText = objc_msgSend(lcdView, @selector(text));

    currentText = [currentText stringByReplacingOccurrencesOfString:@"(" withString:@""];
    currentText = [currentText stringByReplacingOccurrencesOfString:@")" withString:@""];
    currentText = [currentText stringByReplacingOccurrencesOfString:@"-" withString:@""];
    currentText = [currentText stringByReplacingOccurrencesOfString:@" " withString:@""];

    if ([arg2 isEqualToString:@"+"] && currentText.length && [currentText characterAtIndex:currentText.length - 1] == '0') {
        currentText = [currentText stringByReplacingCharactersInRange:NSMakeRange(currentText.length - 1, 1) withString:@"+"];
        objc_msgSend(lcdView, @selector(setText:needsFormat:), currentText, YES);
    }
    else {
        %orig(arg1, arg2);
    }
}

%end