#include <TaoApiCpp/response/TopatsTasksGetResponse.h>

QList<Task> TopatsTasksGetResponse::getTasks() const {
  return tasks;
}
void TopatsTasksGetResponse::setTasks (QList<Task> tasks) {
  this->tasks = tasks;
}

void TopatsTasksGetResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("tasks")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("tasks");
  Parser *parser;
  foreach (parser, listParser) {
    Task tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    tasks.append(tmp);
  }
  }

}

