#include <TaoApiCpp/request/ItempropsGetRequest.h>

QString ItempropsGetRequest::getApiMethodName() const {
  return "taobao.itemprops.get";
}

QString ItempropsGetRequest::getChildPath() const {
  return childPath;
}
void ItempropsGetRequest::setChildPath (QString childPath) {
  this->childPath = childPath;
  appParams.insert("child_path", childPath);
}

qlonglong ItempropsGetRequest::getCid() const {
  return cid;
}
void ItempropsGetRequest::setCid (qlonglong cid) {
  this->cid = cid;
  appParams.insert("cid", QString::number(cid));
}

QString ItempropsGetRequest::getFields() const {
  return fields;
}
void ItempropsGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

bool ItempropsGetRequest::getIsColorProp() const {
  return isColorProp;
}
void ItempropsGetRequest::setIsColorProp (bool isColorProp) {
  this->isColorProp = isColorProp;
  appParams.insert("is_color_prop", isColorProp? "true": "false");
}

bool ItempropsGetRequest::getIsEnumProp() const {
  return isEnumProp;
}
void ItempropsGetRequest::setIsEnumProp (bool isEnumProp) {
  this->isEnumProp = isEnumProp;
  appParams.insert("is_enum_prop", isEnumProp? "true": "false");
}

bool ItempropsGetRequest::getIsInputProp() const {
  return isInputProp;
}
void ItempropsGetRequest::setIsInputProp (bool isInputProp) {
  this->isInputProp = isInputProp;
  appParams.insert("is_input_prop", isInputProp? "true": "false");
}

bool ItempropsGetRequest::getIsItemProp() const {
  return isItemProp;
}
void ItempropsGetRequest::setIsItemProp (bool isItemProp) {
  this->isItemProp = isItemProp;
  appParams.insert("is_item_prop", isItemProp? "true": "false");
}

bool ItempropsGetRequest::getIsKeyProp() const {
  return isKeyProp;
}
void ItempropsGetRequest::setIsKeyProp (bool isKeyProp) {
  this->isKeyProp = isKeyProp;
  appParams.insert("is_key_prop", isKeyProp? "true": "false");
}

bool ItempropsGetRequest::getIsSaleProp() const {
  return isSaleProp;
}
void ItempropsGetRequest::setIsSaleProp (bool isSaleProp) {
  this->isSaleProp = isSaleProp;
  appParams.insert("is_sale_prop", isSaleProp? "true": "false");
}

qlonglong ItempropsGetRequest::getParentPid() const {
  return parentPid;
}
void ItempropsGetRequest::setParentPid (qlonglong parentPid) {
  this->parentPid = parentPid;
  appParams.insert("parent_pid", QString::number(parentPid));
}

qlonglong ItempropsGetRequest::getPid() const {
  return pid;
}
void ItempropsGetRequest::setPid (qlonglong pid) {
  this->pid = pid;
  appParams.insert("pid", QString::number(pid));
}

qlonglong ItempropsGetRequest::getType() const {
  return type;
}
void ItempropsGetRequest::setType (qlonglong type) {
  this->type = type;
  appParams.insert("type", QString::number(type));
}



ItempropsGetResponse *ItempropsGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ItempropsGetResponse *tmpResponse = new ItempropsGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
