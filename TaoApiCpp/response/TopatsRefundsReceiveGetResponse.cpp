#include <TaoApiCpp/response/TopatsRefundsReceiveGetResponse.h>

Task TopatsRefundsReceiveGetResponse::getTask() const {
  return task;
}
void TopatsRefundsReceiveGetResponse::setTask (Task task) {
  this->task = task;
}

void TopatsRefundsReceiveGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("task")) {
  task.setParser(responseParser->getObjectParser("task"));
  task.parseResponse();
  }

}

