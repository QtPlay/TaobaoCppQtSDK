#ifndef USER_H
#define USER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>
#include <TaoApiCpp/domain/UserCredit.h>
#include <TaoApiCpp/domain/Location.h>


/**
 * @brief 用户
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class User : public TaoDomain
{

public:
 virtual ~User() { }

  QString getAlipayBind() const;
  void setAlipayBind (QString alipayBind);
  QString getAutoRepost() const;
  void setAutoRepost (QString autoRepost);
  QString getAvatar() const;
  void setAvatar (QString avatar);
  QDateTime getBirthday() const;
  void setBirthday (QDateTime birthday);
  UserCredit getBuyerCredit() const;
  void setBuyerCredit (UserCredit buyerCredit);
  bool getConsumerProtection() const;
  void setConsumerProtection (bool consumerProtection);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QString getEmail() const;
  void setEmail (QString email);
  bool getHasMorePic() const;
  void setHasMorePic (bool hasMorePic);
  bool getHasShop() const;
  void setHasShop (bool hasShop);
  bool getHasSubStock() const;
  void setHasSubStock (bool hasSubStock);
  bool getIsGoldenSeller() const;
  void setIsGoldenSeller (bool isGoldenSeller);
  bool getIsLightningConsignment() const;
  void setIsLightningConsignment (bool isLightningConsignment);
  qlonglong getItemImgNum() const;
  void setItemImgNum (qlonglong itemImgNum);
  qlonglong getItemImgSize() const;
  void setItemImgSize (qlonglong itemImgSize);
  QDateTime getLastVisit() const;
  void setLastVisit (QDateTime lastVisit);
  bool getLiangpin() const;
  void setLiangpin (bool liangpin);
  Location getLocation() const;
  void setLocation (Location location);
  bool getMagazineSubscribe() const;
  void setMagazineSubscribe (bool magazineSubscribe);
  QString getNick() const;
  void setNick (QString nick);
  bool getOnlineGaming() const;
  void setOnlineGaming (bool onlineGaming);
  QString getPromotedType() const;
  void setPromotedType (QString promotedType);
  qlonglong getPropImgNum() const;
  void setPropImgNum (qlonglong propImgNum);
  qlonglong getPropImgSize() const;
  void setPropImgSize (qlonglong propImgSize);
  UserCredit getSellerCredit() const;
  void setSellerCredit (UserCredit sellerCredit);
  QString getSex() const;
  void setSex (QString sex);
  bool getSignFoodSellerPromise() const;
  void setSignFoodSellerPromise (bool signFoodSellerPromise);
  QString getStatus() const;
  void setStatus (QString status);
  QString getType() const;
  void setType (QString type);
  QString getUid() const;
  void setUid (QString uid);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  QString getVerticalMarket() const;
  void setVerticalMarket (QString verticalMarket);
  QString getVipInfo() const;
  void setVipInfo (QString vipInfo);
  
  virtual void parseResponse();

private:
/**
 * @brief 有无绑定。可选值:bind(绑定),notbind(未绑定)
 **/
  QString alipayBind;

/**
 * @brief 是否受限制。可选值:limited(受限制),unlimited(不受限)
 **/
  QString autoRepost;

/**
 * @brief 用户头像地址
 **/
  QString avatar;

/**
 * @brief 生日
 **/
  QDateTime birthday;

/**
 * @brief 买家信用
 **/
  UserCredit buyerCredit;

/**
 * @brief 是否参加消保
 **/
  bool consumerProtection;

/**
 * @brief 用户注册时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime created;

/**
 * @brief 联系人email
 **/
  QString email;

/**
 * @brief 是否购买多图服务。可选值:true(是),false(否)
 **/
  bool hasMorePic;

/**
 * @brief 用户作为卖家是否开过店
 **/
  bool hasShop;

/**
 * @brief 表示用户是否具备修改商品减库存逻辑的权限（一共有拍下减库存和付款减库存两种逻辑） 
值含义： 
1）true：是 
2）false：否。
 **/
  bool hasSubStock;

/**
 * @brief 用户是否是金牌卖家
 **/
  bool isGoldenSeller;

/**
 * @brief 是否24小时闪电发货(实物类)
 **/
  bool isLightningConsignment;

/**
 * @brief 可上传商品图片数量
 **/
  qlonglong itemImgNum;

/**
 * @brief 单张商品图片最大容量(商品主图大小)。单位:k
 **/
  qlonglong itemImgSize;

/**
 * @brief 最近登陆时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime lastVisit;

/**
 * @brief 是否是无名良品用户，true or  false
 **/
  bool liangpin;

/**
 * @brief 用户当前居住地公开信息。如：location.city获取其中的city数据
 **/
  Location location;

/**
 * @brief 是否订阅了淘宝天下杂志
 **/
  bool magazineSubscribe;

/**
 * @brief 用户昵称
 **/
  QString nick;

/**
 * @brief 用户是否为网游用户，属于隐私信息，需要登陆才能查看自己的。 
目前仅供taobao.user.get使用
 **/
  bool onlineGaming;

/**
 * @brief 有无实名认证。可选值:authentication(实名认证),not authentication(没有认证)
 **/
  QString promotedType;

/**
 * @brief 可上传属性图片数量
 **/
  qlonglong propImgNum;

/**
 * @brief 单张销售属性图片最大容量（非主图的商品图片和商品属性图片）。单位:k
 **/
  qlonglong propImgSize;

/**
 * @brief 卖家信用
 **/
  UserCredit sellerCredit;

/**
 * @brief 性别。可选值:m(男),f(女)
 **/
  QString sex;

/**
 * @brief 卖家是否签署食品卖家承诺协议
 **/
  bool signFoodSellerPromise;

/**
 * @brief 状态。可选值:normal(正常),inactive(未激活),delete(删除),reeze(冻结),supervise(监管)
 **/
  QString status;

/**
 * @brief 用户类型。可选值:B(B商家),C(C商家)
 **/
  QString type;

/**
 * @brief 用户字符串ID
 **/
  QString uid;

/**
 * @brief 用户数字ID
 **/
  qlonglong userId;

/**
 * @brief 用户参与垂直市场类型。shoes表示鞋城垂直市场用户，3C表示3C垂直市场用户。多个类型之间用","分隔。如：一个用户既是3C用户又是鞋城用户，那么这个字段返回就是"3C,shoes"。如果用户不是垂直市场用户，此字段返回为""。
 **/
  QString verticalMarket;

/**
 * @brief 用户的全站vip信息，可取值如下：c(普通会员),asso_vip(荣誉会员)，vip1,vip2,vip3,vip4,vip5,vip6(六个等级的正式vip会员)，共8种取值，其中asso_vip是由vip会员衰退而成，与主站上的vip0对应。
 **/
  QString vipInfo;

};

#endif  /* USER_H */
