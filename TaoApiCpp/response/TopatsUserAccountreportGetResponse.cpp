#include <TaoApiCpp/response/TopatsUserAccountreportGetResponse.h>

Task TopatsUserAccountreportGetResponse::getTask() const {
  return task;
}
void TopatsUserAccountreportGetResponse::setTask (Task task) {
  this->task = task;
}

void TopatsUserAccountreportGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("task")) {
  task.setParser(responseParser->getObjectParser("task"));
  task.parseResponse();
  }

}

