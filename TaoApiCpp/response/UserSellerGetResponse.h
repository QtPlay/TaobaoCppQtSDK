#ifndef USERSELLERGETRESPONSE_H
#define USERSELLERGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/User.h>


/**
 * @brief TOP RESPONSE API: 查询卖家用户信息（只能查询有店铺的用户）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UserSellerGetResponse : public TaoResponse
{
public:
 virtual ~UserSellerGetResponse() { }

  User getUser() const;
  void setUser (User user);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 只返回user_id,nick,sex,seller_credit,type,has_more_pic,item_img_num,item_img_size,prop_img_num,prop_img_size,auto_repost,promoted_type,status,alipay_bind,consumer_protection,avatar,liangpin,sign_food_seller_promise,has_shop,is_lightning_consignment,has_sub_stock,is_golden_seller,vip_info,magazine_subscribe,vertical_market,online_gaming
 **/
  User user;

};

#endif
