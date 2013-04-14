#include <TaoApiCpp/response/UmpToolsGetResponse.h>

QList<QString> UmpToolsGetResponse::getTools() const {
  return tools;
}
void UmpToolsGetResponse::setTools (QList<QString> tools) {
  this->tools = tools;
}

void UmpToolsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("tools")) {
  tools = responseParser->getListStrByName("tools");
  }

}

