include theos/makefiles/common.mk

TWEAK_NAME = Plus4Belarus
Plus4Belarus_FILES = Tweak.xm
ARCHS = armv7 arm64

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 MobilePhone"
