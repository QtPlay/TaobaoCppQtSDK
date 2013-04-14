#include <TaoApiCpp/response/TopatsTradesFullinfoGetResponse.h>

Task TopatsTradesFullinfoGetResponse::getTask() const {
  return task;
}
void TopatsTradesFullinfoGetResponse::setTask (Task task) {
  this->task = task;
}

void TopatsTradesFullinfoGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("task")) {
  task.setParser(responseParser->getObjectParser("task"));
  task.parseResponse();
  }

}

