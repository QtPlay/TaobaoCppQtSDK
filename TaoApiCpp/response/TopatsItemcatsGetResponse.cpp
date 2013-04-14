#include <TaoApiCpp/response/TopatsItemcatsGetResponse.h>

Task TopatsItemcatsGetResponse::getTask() const {
  return task;
}
void TopatsItemcatsGetResponse::setTask (Task task) {
  this->task = task;
}

void TopatsItemcatsGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("task")) {
  task.setParser(responseParser->getObjectParser("task"));
  task.parseResponse();
  }

}

