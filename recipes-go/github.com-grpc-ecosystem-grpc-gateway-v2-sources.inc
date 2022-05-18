SRC_URI += "https://proxy.golang.org/github.com/grpc-ecosystem/grpc-gateway/v2/@v/v2.10.0.zip;srcoutput=github.com/grpc-ecosystem/grpc-gateway/v2;srcinput=github.com/grpc-ecosystem/grpc-gateway/v2@v2.10.0;downloadfilename=github-com-grpc-ecosystem-grpc-gateway-v2-2.10.0.zip;name=github-com-grpc-ecosystem-grpc-gateway-v2"
SRC_URI[github-com-grpc-ecosystem-grpc-gateway-v2.sha256sum] = "61dbb5ee6694053064ecb6d754cdae5a29fbb05e504baf362cf13015fd93dc6d"
GOSRC_REMOVEDIRS += "github.com/grpc-ecosystem/grpc-gateway/v2/examples"

GOSRC_LICENSE += "\
    BSD-3-Clause \
"
LIC_FILES_CHKSUM += "\
    file://src/github.com/grpc-ecosystem/grpc-gateway/v2/LICENSE.txt;md5=c510a2a01572b82d27f28fd4d02ca318 \
    file://src/github.com/grpc-ecosystem/grpc-gateway/v2/internal/casing/LICENSE.md;md5=939cce1ec101726fa754e698ac871622 \
"

GOSRC_INCLUDEGUARD += "github.com-grpc-ecosystem-grpc-gateway-v2-sources.inc"

require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-antihax-optional-sources.inc', '', 'github.com-antihax-optional-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-golang-glog-sources.inc', '', 'github.com-golang-glog-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-golang-protobuf-sources.inc', '', 'github.com-golang-protobuf-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-google-go-cmp-sources.inc', '', 'github.com-google-go-cmp-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'github.com-rogpeppe-fastuuid-sources.inc', '', 'github.com-rogpeppe-fastuuid-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'golang.org-x-oauth2-sources.inc', '', 'golang.org-x-oauth2-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-genproto-sources.inc', '', 'google.golang.org-genproto-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-grpc-sources.inc', '', 'google.golang.org-grpc-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'google.golang.org-protobuf-sources.inc', '', 'google.golang.org-protobuf-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'gopkg.in-yaml.v2-sources.inc', '', 'gopkg.in-yaml.v2-sources.inc', d)}
require ${@bb.utils.contains('GOSRC_INCLUDEGUARD', 'sigs.k8s.io-yaml-sources.inc', '', 'sigs.k8s.io-yaml-sources.inc', d)}