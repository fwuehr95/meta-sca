SUMMARY = "Leveled execution logs for Go"
HOMEPAGE = "https://github.com/golang/glog"

SRC_URI = "git://${GO_IMPORT};protocol=https"
SRCREV = "23def4e6c14b4da8ac2ed8007337bc5eb5007998"

GO_IMPORT = "github.com/golang/glog"

LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM  = "file://src/${GO_IMPORT}/LICENSE;md5=19cbd64715b51267a47bf3750cc6a8a5"

inherit go
inherit native