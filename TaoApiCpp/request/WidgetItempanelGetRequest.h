#ifndef WIDGETITEMPANELGETREQUEST_H
#define WIDGETITEMPANELGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WidgetItempanelGetResponse.h>

/**
 * TOP API: 根据商品id获取sku选择面板需要的信息。session必传且用户当前浏览器必需已经在淘宝登陆，具体判断方法可以调用taobao.widget.loginstatus.get进行判断。会根据session生成购买链接。仅支持widget入口调用。调用入口为/widget。签名方法简化为Hmac-md5,hmac(secret+‘app_key' ＋app_key +'timestamp' + timestamp+secret, secret)。timestamp为60分钟内有效
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WidgetItempanelGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);


  virtual WidgetItempanelGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 参数fields为选填参数，表示需要返回哪些字段，默认为空：表示所有字段都返回。指定item_id返回item_id; 指定title返回title; 指定click_url返回click_url(如果此商品有淘宝客会默认返回转换过的淘宝客连接，绑定用户为appkey对应的用户); 指定price返回price(商品价格，如果有多个sku返回的是sku的价格区间); 指定quantify返回quantity(商品总数); 指定pic_url返回pic_url(商品主图地址); 指定item_pics返回item_pics(商品图片列表); 指定skus返回skus和sku_props组合; 指定shop_promotion_data返回shop_promotion_data(商品所属的店铺优惠信息); 指定item_promotion_data返回item_promotion_data(商品的优惠信息); 指定seller_nick返回seller_nick(卖家昵称); 指定is_mall返回is_mall(是否商城商品，true表示是商城商品);add_url不可选一定会返回
 **/
  QString fields;

/**
 * @brief 要查询的商品的数字id，等同于Item的num_iid
 **/
  qlonglong itemId;

};

#endif  /* WIDGETITEMPANELGETREQUEST_H */
