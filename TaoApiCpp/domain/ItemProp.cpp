#include <TaoApiCpp/domain/ItemProp.h>
QString ItemProp::getChildTemplate() const {
  return childTemplate;
}
void ItemProp::setChildTemplate (QString childTemplate) {
  this->childTemplate = childTemplate;
}

qlonglong ItemProp::getCid() const {
  return cid;
}
void ItemProp::setCid (qlonglong cid) {
  this->cid = cid;
}

bool ItemProp::getIsAllowAlias() const {
  return isAllowAlias;
}
void ItemProp::setIsAllowAlias (bool isAllowAlias) {
  this->isAllowAlias = isAllowAlias;
}

bool ItemProp::getIsColorProp() const {
  return isColorProp;
}
void ItemProp::setIsColorProp (bool isColorProp) {
  this->isColorProp = isColorProp;
}

bool ItemProp::getIsEnumProp() const {
  return isEnumProp;
}
void ItemProp::setIsEnumProp (bool isEnumProp) {
  this->isEnumProp = isEnumProp;
}

bool ItemProp::getIsInputProp() const {
  return isInputProp;
}
void ItemProp::setIsInputProp (bool isInputProp) {
  this->isInputProp = isInputProp;
}

bool ItemProp::getIsItemProp() const {
  return isItemProp;
}
void ItemProp::setIsItemProp (bool isItemProp) {
  this->isItemProp = isItemProp;
}

bool ItemProp::getIsKeyProp() const {
  return isKeyProp;
}
void ItemProp::setIsKeyProp (bool isKeyProp) {
  this->isKeyProp = isKeyProp;
}

bool ItemProp::getIsSaleProp() const {
  return isSaleProp;
}
void ItemProp::setIsSaleProp (bool isSaleProp) {
  this->isSaleProp = isSaleProp;
}

QDateTime ItemProp::getModifiedTime() const {
  return modifiedTime;
}
void ItemProp::setModifiedTime (QDateTime modifiedTime) {
  this->modifiedTime = modifiedTime;
}

QString ItemProp::getModifiedType() const {
  return modifiedType;
}
void ItemProp::setModifiedType (QString modifiedType) {
  this->modifiedType = modifiedType;
}

bool ItemProp::getMulti() const {
  return multi;
}
void ItemProp::setMulti (bool multi) {
  this->multi = multi;
}

bool ItemProp::getMust() const {
  return must;
}
void ItemProp::setMust (bool must) {
  this->must = must;
}

QString ItemProp::getName() const {
  return name;
}
void ItemProp::setName (QString name) {
  this->name = name;
}

qlonglong ItemProp::getParentPid() const {
  return parentPid;
}
void ItemProp::setParentPid (qlonglong parentPid) {
  this->parentPid = parentPid;
}

qlonglong ItemProp::getParentVid() const {
  return parentVid;
}
void ItemProp::setParentVid (qlonglong parentVid) {
  this->parentVid = parentVid;
}

qlonglong ItemProp::getPid() const {
  return pid;
}
void ItemProp::setPid (qlonglong pid) {
  this->pid = pid;
}

QList<PropValue> ItemProp::getPropValues() const {
  return propValues;
}
void ItemProp::setPropValues (QList<PropValue> propValues) {
  this->propValues = propValues;
}

bool ItemProp::getRequired() const {
  return required;
}
void ItemProp::setRequired (bool required) {
  this->required = required;
}

qlonglong ItemProp::getSortOrder() const {
  return sortOrder;
}
void ItemProp::setSortOrder (qlonglong sortOrder) {
  this->sortOrder = sortOrder;
}

QString ItemProp::getStatus() const {
  return status;
}
void ItemProp::setStatus (QString status) {
  this->status = status;
}

QString ItemProp::getType() const {
  return type;
}
void ItemProp::setType (QString type) {
  this->type = type;
}


void ItemProp::parseResponse() {
  if (responseParser->hasName("child_template")) {
  childTemplate = responseParser->getStrByName("child_template");
  }
  if (responseParser->hasName("cid")) {
  cid = responseParser->getNumByName("cid");
  }
  if (responseParser->hasName("is_allow_alias")) {
  isAllowAlias = responseParser->getBoolByName("is_allow_alias");
  }
  if (responseParser->hasName("is_color_prop")) {
  isColorProp = responseParser->getBoolByName("is_color_prop");
  }
  if (responseParser->hasName("is_enum_prop")) {
  isEnumProp = responseParser->getBoolByName("is_enum_prop");
  }
  if (responseParser->hasName("is_input_prop")) {
  isInputProp = responseParser->getBoolByName("is_input_prop");
  }
  if (responseParser->hasName("is_item_prop")) {
  isItemProp = responseParser->getBoolByName("is_item_prop");
  }
  if (responseParser->hasName("is_key_prop")) {
  isKeyProp = responseParser->getBoolByName("is_key_prop");
  }
  if (responseParser->hasName("is_sale_prop")) {
  isSaleProp = responseParser->getBoolByName("is_sale_prop");
  }
  if (responseParser->hasName("modified_time")) {
  modifiedTime = responseParser->getDateByName("modified_time");
  }
  if (responseParser->hasName("modified_type")) {
  modifiedType = responseParser->getStrByName("modified_type");
  }
  if (responseParser->hasName("multi")) {
  multi = responseParser->getBoolByName("multi");
  }
  if (responseParser->hasName("must")) {
  must = responseParser->getBoolByName("must");
  }
  if (responseParser->hasName("name")) {
  name = responseParser->getStrByName("name");
  }
  if (responseParser->hasName("parent_pid")) {
  parentPid = responseParser->getNumByName("parent_pid");
  }
  if (responseParser->hasName("parent_vid")) {
  parentVid = responseParser->getNumByName("parent_vid");
  }
  if (responseParser->hasName("pid")) {
  pid = responseParser->getNumByName("pid");
  }
  if (responseParser->hasName("prop_values")) {
  QList<Parser *> listParser = responseParser->getListObjectParser("prop_values");
  Parser *parser;
  foreach (parser, listParser) {
    PropValue tmp;
    tmp.setParser(parser);
    tmp.parseResponse();
    propValues.append(tmp);
  }
  }
  if (responseParser->hasName("required")) {
  required = responseParser->getBoolByName("required");
  }
  if (responseParser->hasName("sort_order")) {
  sortOrder = responseParser->getNumByName("sort_order");
  }
  if (responseParser->hasName("status")) {
  status = responseParser->getStrByName("status");
  }
  if (responseParser->hasName("type")) {
  type = responseParser->getStrByName("type");
  }

}

