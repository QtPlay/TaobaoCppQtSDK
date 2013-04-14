#ifndef ITEMRECOMMENDITEMSGETREQUEST_H
#define ITEMRECOMMENDITEMSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemrecommendItemsGetResponse.h>

/**
 * TOP API: 根据推荐类型获取推荐的关联关系商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemrecommendItemsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCount() const
;  void setCount (qlonglong count);

 QString getExt() const
;  void setExt (QString ext);

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);

 qlonglong getRecommendType() const
;  void setRecommendType (qlonglong recommendType);


  virtual ItemrecommendItemsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 请求返回宝贝的个数，建议取20个
 **/
  qlonglong count;

/**
 * @brief 额外的参数信息
 **/
  QString ext;

/**
 * @brief 商品ID
 **/
  qlonglong itemId;

/**
 * @brief 查询类型标识符，可传入1-3，1：同类商品推荐，2：异类商品推荐， 3：同店商品推荐。其他值当非法值处理
 **/
  qlonglong recommendType;

};

#endif  /* ITEMRECOMMENDITEMSGETREQUEST_H */
