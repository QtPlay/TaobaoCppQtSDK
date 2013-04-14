#ifndef CATEGORYRECOMMENDITEMSGETREQUEST_H
#define CATEGORYRECOMMENDITEMSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/CategoryrecommendItemsGetResponse.h>

/**
 * TOP API: 根据类目信息推荐相关联的宝贝集
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CategoryrecommendItemsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCategoryId() const
;  void setCategoryId (qlonglong categoryId);

 qlonglong getCount() const
;  void setCount (qlonglong count);

 QString getExt() const
;  void setExt (QString ext);

 qlonglong getRecommendType() const
;  void setRecommendType (qlonglong recommendType);


  virtual CategoryrecommendItemsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 传入叶子类目ID
 **/
  qlonglong categoryId;

/**
 * @brief 请求个数，建议获取20个
 **/
  qlonglong count;

/**
 * @brief 额外参数
 **/
  QString ext;

/**
 * @brief 请求类型，1：类目下热门商品推荐。其他值当非法值处理
 **/
  qlonglong recommendType;

};

#endif  /* CATEGORYRECOMMENDITEMSGETREQUEST_H */
