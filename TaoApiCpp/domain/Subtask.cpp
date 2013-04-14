#include <TaoApiCpp/domain/Subtask.h>
bool Subtask::getIsSuccess() const {
  return isSuccess;
}
void Subtask::setIsSuccess (bool isSuccess) {
  this->isSuccess = isSuccess;
}

QString Subtask::getSubTaskRequest() const {
  return subTaskRequest;
}
void Subtask::setSubTaskRequest (QString subTaskRequest) {
  this->subTaskRequest = subTaskRequest;
}

QString Subtask::getSubTaskResult() const {
  return subTaskResult;
}
void Subtask::setSubTaskResult (QString subTaskResult) {
  this->subTaskResult = subTaskResult;
}


void Subtask::parseResponse() {
  if (responseParser->hasName("is_success")) {
  isSuccess = responseParser->getBoolByName("is_success");
  }
  if (responseParser->hasName("sub_task_request")) {
  subTaskRequest = responseParser->getStrByName("sub_task_request");
  }
  if (responseParser->hasName("sub_task_result")) {
  subTaskResult = responseParser->getStrByName("sub_task_result");
  }

}

