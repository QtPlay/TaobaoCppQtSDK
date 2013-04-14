#ifndef SHOPRECOMMENDSHOPSGETREQUEST_H
#define SHOPRECOMMENDSHOPSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ShoprecommendShopsGetResponse.h>

/**
 * TOP API: 根据店铺信息推荐相关联的店铺集
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ShoprecommendShopsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCount() const
;  void setCount (qlonglong count);

 QString getExt() const
;  void setExt (QString ext);

 qlonglong getRecommendType() const
;  void setRecommendType (qlonglong recommendType);

 qlonglong getSellerId() const
;  void setSellerId (qlonglong sellerId);


  virtual ShoprecommendShopsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 请求个数，建议获取16个
 **/
  qlonglong count;

/**
 * @brief 额外参数
 **/
  QString ext;

/**
 * @brief 请求类型，1：关联店铺推荐。其他值当非法值处理
 **/
  qlonglong recommendType;

/**
 * @brief 传入卖家ID
 **/
  qlonglong sellerId;

};

#endif  /* SHOPRECOMMENDSHOPSGETREQUEST_H */
