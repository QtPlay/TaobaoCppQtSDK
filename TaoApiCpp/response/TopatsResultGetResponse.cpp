#include <TaoApiCpp/response/TopatsResultGetResponse.h>

Task TopatsResultGetResponse::getTask() const {
  return task;
}
void TopatsResultGetResponse::setTask (Task task) {
  this->task = task;
}

void TopatsResultGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("task")) {
  task.setParser(responseParser->getObjectParser("task"));
  task.parseResponse();
  }

}

