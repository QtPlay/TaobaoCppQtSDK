#include <TaoApiCpp/response/TopatsIncrementMessagesGetResponse.h>

Task TopatsIncrementMessagesGetResponse::getTask() const {
  return task;
}
void TopatsIncrementMessagesGetResponse::setTask (Task task) {
  this->task = task;
}

void TopatsIncrementMessagesGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("task")) {
  task.setParser(responseParser->getObjectParser("task"));
  task.parseResponse();
  }

}

