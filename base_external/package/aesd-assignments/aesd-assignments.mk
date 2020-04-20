
##############################################################
#
# AESD-ASSIGNMENTS
#
##############################################################

#TODO: Fill up the contents below in order to reference your assignment 3 git contents
AESD_ASSIGNMENTS_VERSION = c813f11b9b970a8dfa9deb59e8292841eccf9891
AESD_ASSIGNMENTS_SITE = git@github.com:cu-ecen-5013/assignment-3-manual-kernel-and-root-filesystem-build-kbryan3.git
AESD_ASSIGNMENTS_SITE_METHOD = git
#AESD_ASSIGNMENTS_OVERRIDE_SRCDIR = ~/assignment-1-bash-scripting-basics-kbryan3


define AESD_ASSIGNMENTS_BUILD_CMDS
	$(MAKE) $(TARGET_CONFIGURE_OPTS) -C $(@D) all
endef

#TODO: Add required executables or scripts below
define AESD_ASSIGNMENTS_INSTALL_TARGET_CMDS
	$(INSTALL) -m 0755 $(@D)/overtempApp $(TARGET_DIR)/usr/bin
endef


$(eval $(generic-package))
