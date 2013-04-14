#ifndef ITEMPROPVALUESGETRESPONSE_H
#define ITEMPROPVALUESGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>
#include <QList>
#include <TaoApiCpp/domain/PropValue.h>


/**
 * @brief TOP RESPONSE API: 传入类目ID,必需是叶子类目，通过taobao.itemcats.get获取类目ID 
返回字段目前支持有：cid,pid,prop_name,vid,name,name_alias,status,sort_order 
作用:获取标准类目属性值
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItempropvaluesGetResponse : public TaoResponse
{
public:
 virtual ~ItempropvaluesGetResponse() { }

  QDateTime getLastModified() const;
  void setLastModified (QDateTime lastModified);  QList<PropValue> getPropValues() const;
  void setPropValues (QList<PropValue> propValues);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 最近修改时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime lastModified;

/**
 * @brief 属性值,根据fields传入的参数返回相应的结果
 **/
  QList<PropValue> propValues;

};

#endif
