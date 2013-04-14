#ifndef SHOPRECOMMENDITEMSGETREQUEST_H
#define SHOPRECOMMENDITEMSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ShoprecommendItemsGetResponse.h>

/**
 * TOP API: 根据店铺信息推荐相关联的宝贝集
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ShoprecommendItemsGetRequest : public TaoRequest
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


  virtual ShoprecommendItemsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 请求个数，最大只能获取10个
 **/
  qlonglong count;

/**
 * @brief 额外参数
 **/
  QString ext;

/**
 * @brief 请求类型，1：店内热门商品推荐。其他值当非法值处理
 **/
  qlonglong recommendType;

/**
 * @brief <p>传入卖家ID。这里的seller_id得通过<a href="http://api.taobao.com/apidoc/api.htm?path=cid:38-apiId:10449">taobao.taobaoke.shops.get</a>
跟<a href="http://api.taobao.com/apidoc/api.htm?path=cid:38-apiId:21419">taobao.taobaoke.widget.shops.convert</a>这两个接口去获取user_id字段。</p>
<p>如果是非淘客卖家，则无法获取，暂无替代方案。</p>
 **/
  qlonglong sellerId;

};

#endif  /* SHOPRECOMMENDITEMSGETREQUEST_H */
