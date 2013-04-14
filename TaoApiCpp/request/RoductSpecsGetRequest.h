#ifndef RODUCTSPECSGETREQUEST_H
#define RODUCTSPECSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/RoductSpecsGetResponse.h>

/**
 * TOP API: 按productID下载或品牌下载产品规格，返回一组的产品规格信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RoductSpecsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCatId() const
;  void setCatId (qlonglong catId);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 QString getProperties() const
;  void setProperties (QString properties);


  virtual RoductSpecsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 类目的ID号，该id必须和properties同时传入。 
而且只有当product_id不传入的时候才起效果。
 **/
  qlonglong catId;

/**
 * @brief 产品的ID。这个不能和properties和cat_id同时起效果
 **/
  qlonglong productId;

/**
 * @brief 关键属性的字符串，pid:vid;pid:vid 
该字段必须和cat_id同时传入才起效果。 而且只有当product_id不传入的时候才起效果。
 **/
  QString properties;

};

#endif  /* RODUCTSPECSGETREQUEST_H */
