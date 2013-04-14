#ifndef RANDCATSALESPROGETREQUEST_H
#define RANDCATSALESPROGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/RandcatSalesproGetResponse.h>

/**
 * TOP API: 获取被管控的品牌类目下销售信息，销售信息又分成两中，一种是规格属性，要求针对这个属性创建规格信息，第二种是非规格属性（一般会被称为营销属性），这种信息主要是会影响到价格的变化，在做sku的时候会使用到。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RandcatSalesproGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getBrandId() const
;  void setBrandId (qlonglong brandId);

 qlonglong getCatId() const
;  void setCatId (qlonglong catId);


  virtual RandcatSalesproGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 被管控的品牌Id
 **/
  qlonglong brandId;

/**
 * @brief 被管控的类目Id
 **/
  qlonglong catId;

};

#endif  /* RANDCATSALESPROGETREQUEST_H */
