#include <TaoApiCpp/domain/Task.h>
QString Task::getCheckCode() const {
  return checkCode;
}
void Task::setCheckCode (QString checkCode) {
  this->checkCode = checkCode;
}

QDateTime Task::getCreated() const {
  return created;
}
void Task::setCreated (QDateTime created) {
  this->created = created;
}

QString Task::getDownloadUrl() const {
  return downloadUrl;
}
void Task::setDownloadUrl (QString downloadUrl) {
  this->downloadUrl = downloadUrl;
}

QString Task::getMethod() const {
  return method;
}
void Task::setMethod (QString method) {
  this->method = method;
}

QDateTime Task::getSchedule() const {
  return schedule;
}
void Task::setSchedule (QDateTime schedule) {
  this->schedule = schedule;
}

QString Task::getStatus() const {
  return status;
}
void Task::setStatus (QString status) {
  this->status = status;
}

QList<Subtask> Task::getSubtasks() const {
  return subtasks;
}
void Task::setSubtasks (QList<Subtask> subtasks) {
  this->subtasks = subtasks;
}

qlonglong Task::getTaskId() const {
  return taskId;
}
void Task::setTaskId (qlonglong taskId) {
  this->taskId = taskId;
}


void Task::parseResponse() {
  if (responseParser->hasName("check_code")) {
  checkCode = responseParser->getStrByName("check_code");
  }
  if (responseParser->hasName("created")) {
  created = responseParser->getDateByName("created");
  }
  if (responseParser->hasName("download_url")) {
  downloadUrl = responseParser->getStrByName("download_url");
  }
  if (responseParser->hasName("method")) {
  method = responseParser->getStrByName("method");
  }
  if (responseParser->hasName("schedule")) {
  schedule = responseParser->getDateByName("schedule");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("subtasks")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("subtasks");
  Parser *parser;
  foreach (parser, listParser) {
    Subtask tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    subtasks.append(tmp);
  }
  }
  if (responseParser->hasName("task_id")) {
  taskId = responseParser->getNumByName("task_id");
  }

}

