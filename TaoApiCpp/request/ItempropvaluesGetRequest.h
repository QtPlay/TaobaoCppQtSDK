#ifndef ITEMPROPVALUESGETREQUEST_H
#define ITEMPROPVALUESGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItempropvaluesGetResponse.h>

/**
 * TOP API: 传入类目ID,必需是叶子类目，通过taobao.itemcats.get获取类目ID 
返回字段目前支持有：cid,pid,prop_name,vid,name,name_alias,status,sort_order 
作用:获取标准类目属性值
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItempropvaluesGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCid() const
;  void setCid (qlonglong cid);

 QString getFields() const
;  void setFields (QString fields);

 QString getPvs() const
;  void setPvs (QString pvs);

 qlonglong getType() const
;  void setType (qlonglong type);


  virtual ItempropvaluesGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 叶子类目ID ,通过taobao.itemcats.get获得叶子类目ID
 **/
  qlonglong cid;

/**
 * @brief 需要返回的字段。目前支持有：cid,pid,prop_name,vid,name,name_alias,status,sort_order
 **/
  QString fields;

/**
 * @brief 属性和属性值 id串，格式例如(pid1;pid2)或(pid1:vid1;pid2:vid2)或(pid1;pid2:vid2)
 **/
  QString pvs;

/**
 * @brief 获取类目的类型：1代表集市、2代表天猫
 **/
  qlonglong type;

};

#endif  /* ITEMPROPVALUESGETREQUEST_H */
