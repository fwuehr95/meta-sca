SUMMARY = "NPM: @secretlint/profiler"
DESCRIPTION = "Profile manager for Secretlint."
HOMEPAGE = "https://github.com/secretlint/secretlint/tree/master/packages/@secretlint/profiler/"
DEFAULT_PREFERENCE = "${SCA_DEFAULT_PREFERENCE}"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=402802be77c922cb018a8b5099208dab"

DEPENDS = ""

SRC_URI = "https://registry.npmjs.org/@secretlint/profiler/-/profiler-5.1.3.tgz"
SRC_URI[md5sum] = "795c388bb2761a451ded155af671264f"
SRC_URI[sha256sum] = "c13bd2c56339b791f84278d826a3cef939b8951c7efe9b43be6d70f8f5eb8f48"

NPM_PKGNAME = "@secretlint/profiler"

inherit npmhelper
inherit native
