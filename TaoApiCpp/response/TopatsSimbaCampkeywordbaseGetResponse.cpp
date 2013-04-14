#include <TaoApiCpp/response/TopatsSimbaCampkeywordbaseGetResponse.h>

Task TopatsSimbaCampkeywordbaseGetResponse::getTask() const {
  return task;
}
void TopatsSimbaCampkeywordbaseGetResponse::setTask (Task task) {
  this->task = task;
}

void TopatsSimbaCampkeywordbaseGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("task")) {
  task.setParser(responseParser->getObjectParser("task"));
  task.parseResponse();
  }

}

