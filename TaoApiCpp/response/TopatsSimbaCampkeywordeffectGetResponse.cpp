#include <TaoApiCpp/response/TopatsSimbaCampkeywordeffectGetResponse.h>

Task TopatsSimbaCampkeywordeffectGetResponse::getTask() const {
  return task;
}
void TopatsSimbaCampkeywordeffectGetResponse::setTask (Task task) {
  this->task = task;
}

void TopatsSimbaCampkeywordeffectGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("task")) {
  task.setParser(responseParser->getObjectParser("task"));
  task.parseResponse();
  }

}

