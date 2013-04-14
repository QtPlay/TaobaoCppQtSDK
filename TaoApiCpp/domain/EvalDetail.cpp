#include <TaoApiCpp/domain/EvalDetail.h>
qlonglong EvalDetail::getEvalCode() const {
  return evalCode;
}
void EvalDetail::setEvalCode (qlonglong evalCode) {
  this->evalCode = evalCode;
}

QString EvalDetail::getEvalRecer() const {
  return evalRecer;
}
void EvalDetail::setEvalRecer (QString evalRecer) {
  this->evalRecer = evalRecer;
}

QString EvalDetail::getEvalSender() const {
  return evalSender;
}
void EvalDetail::setEvalSender (QString evalSender) {
  this->evalSender = evalSender;
}

QDateTime EvalDetail::getEvalTime() const {
  return evalTime;
}
void EvalDetail::setEvalTime (QDateTime evalTime) {
  this->evalTime = evalTime;
}

QDateTime EvalDetail::getSendTime() const {
  return sendTime;
}
void EvalDetail::setSendTime (QDateTime sendTime) {
  this->sendTime = sendTime;
}


void EvalDetail::parseResponse() {
  if (responseParser->hasName("eval_code")) {
  evalCode = responseParser->getNumByName("eval_code");
  }
  if (responseParser->hasName("eval_recer")) {
  evalRecer = responseParser->getStrByName("eval_recer");
  }
  if (responseParser->hasName("eval_sender")) {
  evalSender = responseParser->getStrByName("eval_sender");
  }
  if (responseParser->hasName("eval_time")) {
  evalTime = responseParser->getDateByName("eval_time");
  }
  if (responseParser->hasName("send_time")) {
  sendTime = responseParser->getDateByName("send_time");
  }

}

