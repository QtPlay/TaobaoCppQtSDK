#ifndef USERRECOMMENDITEMSGETRESPONSE_H
#define USERRECOMMENDITEMSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/FavoriteItem.h>


/**
 * @brief TOP RESPONSE API: 根据用户信息推荐相关联的宝贝集。仅支持widget入口调用，需要同时校验淘宝cookie登陆情况，以及cookie和session授权的一致性。调用入口为/widget/rest。签名方法简化为Hmac-md5,hmac(secret+‘app_key' ＋app_key +'timestamp' + timestamp+secret)。timestamp为60分钟内有效 
此API为组件API，调用方式需要参照：http://open.taobao.com/doc/detail.htm?id=988，以JS-SDK调用
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UserrecommendItemsGetResponse : public TaoResponse
{
public:
 virtual ~UserrecommendItemsGetResponse() { }

  QList<FavoriteItem> getFavoriteItems() const;
  void setFavoriteItems (QList<FavoriteItem> favoriteItems);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回用户相关的关联宝贝集合
 **/
  QList<FavoriteItem> favoriteItems;

};

#endif
