#include <TaoApiCpp/response/TopatsItemsAllGetResponse.h>

Task TopatsItemsAllGetResponse::getTask() const {
  return task;
}
void TopatsItemsAllGetResponse::setTask (Task task) {
  this->task = task;
}

void TopatsItemsAllGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("task")) {
  task.setParser(responseParser->getObjectParser("task"));
  task.parseResponse();
  }

}

