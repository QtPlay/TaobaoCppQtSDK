#include <TaoApiCpp/response/TopatsTradesSoldGetResponse.h>

Task TopatsTradesSoldGetResponse::getTask() const {
  return task;
}
void TopatsTradesSoldGetResponse::setTask (Task task) {
  this->task = task;
}

void TopatsTradesSoldGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("task")) {
  task.setParser(responseParser->getObjectParser("task"));
  task.parseResponse();
  }

}

