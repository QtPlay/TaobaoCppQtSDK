#include <TaoApiCpp/response/UmpToolAddResponse.h>

qlonglong UmpToolAddResponse::getToolId() const {
  return toolId;
}
void UmpToolAddResponse::setToolId (qlonglong toolId) {
  this->toolId = toolId;
}

void UmpToolAddResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("tool_id")) {
  toolId = responseParser->getNumByName("tool_id");
  }

}

