#include <TaoApiCpp/request/VasSubscSearchRequest.h>

QString VasSubscSearchRequest::getApiMethodName() const {
  return "taobao.vas.subsc.search";
}

QString VasSubscSearchRequest::getArticleCode() const {
  return articleCode;
}
void VasSubscSearchRequest::setArticleCode (QString articleCode) {
  this->articleCode = articleCode;
  appParams.insert("article_code", articleCode);
}

bool VasSubscSearchRequest::getAutosub() const {
  return autosub;
}
void VasSubscSearchRequest::setAutosub (bool autosub) {
  this->autosub = autosub;
  appParams.insert("autosub", autosub? "true": "false");
}

QDateTime VasSubscSearchRequest::getEndDeadline() const {
  return endDeadline;
}
void VasSubscSearchRequest::setEndDeadline (QDateTime endDeadline) {
  this->endDeadline = endDeadline;
  appParams.insert("end_deadline", endDeadline.toString("yyyy-MM-dd hh:mm:ss"));
}

bool VasSubscSearchRequest::getExpireNotice() const {
  return expireNotice;
}
void VasSubscSearchRequest::setExpireNotice (bool expireNotice) {
  this->expireNotice = expireNotice;
  appParams.insert("expire_notice", expireNotice? "true": "false");
}

QString VasSubscSearchRequest::getItemCode() const {
  return itemCode;
}
void VasSubscSearchRequest::setItemCode (QString itemCode) {
  this->itemCode = itemCode;
  appParams.insert("item_code", itemCode);
}

QString VasSubscSearchRequest::getNick() const {
  return nick;
}
void VasSubscSearchRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong VasSubscSearchRequest::getPageNo() const {
  return pageNo;
}
void VasSubscSearchRequest::setPageNo (qlonglong pageNo) {
  this->pageNo = pageNo;
  appParams.insert("page_no", QString::number(pageNo));
}

qlonglong VasSubscSearchRequest::getPageSize() const {
  return pageSize;
}
void VasSubscSearchRequest::setPageSize (qlonglong pageSize) {
  this->pageSize = pageSize;
  appParams.insert("page_size", QString::number(pageSize));
}

QDateTime VasSubscSearchRequest::getStartDeadline() const {
  return startDeadline;
}
void VasSubscSearchRequest::setStartDeadline (QDateTime startDeadline) {
  this->startDeadline = startDeadline;
  appParams.insert("start_deadline", startDeadline.toString("yyyy-MM-dd hh:mm:ss"));
}

qlonglong VasSubscSearchRequest::getStatus() const {
  return status;
}
void VasSubscSearchRequest::setStatus (qlonglong status) {
  this->status = status;
  appParams.insert("status", QString::number(status));
}



VasSubscSearchResponse *VasSubscSearchRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  VasSubscSearchResponse *tmpResponse = new VasSubscSearchResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
