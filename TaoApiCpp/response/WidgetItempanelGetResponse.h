#ifndef WIDGETITEMPANELGETRESPONSE_H
#define WIDGETITEMPANELGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/WidgetItem.h>


/**
 * @brief TOP RESPONSE API: 根据商品id获取sku选择面板需要的信息。session必传且用户当前浏览器必需已经在淘宝登陆，具体判断方法可以调用taobao.widget.loginstatus.get进行判断。会根据session生成购买链接。仅支持widget入口调用。调用入口为/widget。签名方法简化为Hmac-md5,hmac(secret+‘app_key' ＋app_key +'timestamp' + timestamp+secret, secret)。timestamp为60分钟内有效
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WidgetItempanelGetResponse : public TaoResponse
{
public:
 virtual ~WidgetItempanelGetResponse() { }

  QString getAddUrl() const;
  void setAddUrl (QString addUrl);  WidgetItem getItem() const;
  void setItem (WidgetItem item);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 服务端签名后的添加链接，isv在使用的时候前面加上“http://gw.api.taobao.com/widget?”后面加上用户选择的sku_id和购买的quantity即可生成完整的购买链接。
 **/
  QString addUrl;

/**
 * @brief 取得的商品相关信息，如果不指定fields返回所有字段，如果指定了fields但是都是无效字段，返回的item结构体中字段为空
 **/
  WidgetItem item;

};

#endif
