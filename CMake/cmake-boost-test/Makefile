BUILD_TYPES = debug release
# to create the build directory names, we prepend each build type with the
# parent directory
BUILD_DIRS = $(BUILD_TYPES, <build/)

VIRTUALENV = cmake-boost-test
VIRTUALENV_DIR = $(WORKON_HOME)/$(VIRTUALENV)

.PHONY: bootstrap

bootstrap: $(BUILD_DIRS) $(VIRTUALENV_DIR)

$(BUILD_DIRS):
	echo Create out-of-source $@ build directory 'build/$@'
	mkdir -p build/$@
	cd build/$@ ; cmake -DCMAKE_BUILD_TYPE=$@ ../.. ; make
	echo Done.

$(VIRTUALENV_DIR):
# only if virtualenv $(VIRTUALENV) does not yet exists, we create it
# and install packages in it
ifneq ($(wildcard $(VIRTUALENV_DIR)),)
	echo Create Python virtual environment '$(VIRTUALENV)'
	virtualenv --no-site-packages $(VIRTUALENV_DIR)
	$(VIRTUALENV_DIR)/bin/pip install -r requirements.txt
	echo Done.
else
	echo Cannot create Python virtual environment '$(VIRTUALENV)' as it already exists.
	echo You will have to setup such an environment manually.
endif
