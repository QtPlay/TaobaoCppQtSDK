#include <TaoApiCpp/response/TopatsDeliverySendResponse.h>

Task TopatsDeliverySendResponse::getTask() const {
  return task;
}
void TopatsDeliverySendResponse::setTask (Task task) {
  this->task = task;
}

void TopatsDeliverySendResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("task")) {
  task.setParser(responseParser->getObjectParser("task"));
  task.parseResponse();
  }

}

