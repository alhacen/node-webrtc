#pragma once

#include "src/converters/napi.h"
#include "src/converters/v8.h"

namespace webrtc { struct RtpExtension; }
namespace webrtc { typedef RtpExtension RtpHeaderExtensionParameters; }

namespace node_webrtc {

DECLARE_TO_JS(webrtc::RtpHeaderExtensionParameters)
DECLARE_TO_NAPI(webrtc::RtpHeaderExtensionParameters)

}  // namespace node_webrtc
