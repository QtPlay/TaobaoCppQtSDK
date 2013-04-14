#ifndef SELLERCATSLISTUPDATEREQUEST_H
#define SELLERCATSLISTUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SellercatsListUpdateResponse.h>

/**
 * TOP API: 此API更新卖家店铺内自定义类目  
注：因为缓存的关系，添加的新类目需8个小时后才可以在淘宝页面上正常显示，但是不影响在该类目下商品发布
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercatsListUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCid() const
;  void setCid (qlonglong cid);

 QString getName() const
;  void setName (QString name);

 QString getPictUrl() const
;  void setPictUrl (QString pictUrl);

 qlonglong getSortOrder() const
;  void setSortOrder (qlonglong sortOrder);


  virtual SellercatsListUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 卖家自定义类目编号
 **/
  qlonglong cid;

/**
 * @brief 卖家自定义类目名称。不超过20个字符
 **/
  QString name;

/**
 * @brief 链接图片URL地址
 **/
  QString pictUrl;

/**
 * @brief 该类目在页面上的排序位置,取值范围:大于零的整数
 **/
  qlonglong sortOrder;

};

#endif  /* SELLERCATSLISTUPDATEREQUEST_H */
