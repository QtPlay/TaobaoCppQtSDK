#include <TaoApiCpp/response/UmpToolUpdateResponse.h>

qlonglong UmpToolUpdateResponse::getToolId() const {
  return toolId;
}
void UmpToolUpdateResponse::setToolId (qlonglong toolId) {
  this->toolId = toolId;
}

void UmpToolUpdateResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("tool_id")) {
  toolId = responseParser->getNumByName("tool_id");
  }

}

