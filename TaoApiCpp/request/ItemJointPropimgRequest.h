#ifndef ITEMJOINTPROPIMGREQUEST_H
#define ITEMJOINTPROPIMGREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemJointPropimgResponse.h>

/**
 * TOP API: * 关联一张商品属性图片到num_iid指定的商品中 
    * 传入的num_iid所对应的商品必须属于当前会话的用户 
    * 图片的属性必须要是颜色的属性，这个在前台显示的时候需要和sku进行关联的 
    * 商品图片关联在卖家身份和图片来源上的限制，卖家要是B卖家或订购了多图服务才能关联图片，并且图片要来自于卖家自己的图片空间才行 
    * 商品图片数量有限制。不管是上传的图片还是关联的图片，他们的总数不能超过一定限额，最多不能超过24张（每个颜色属性都有一张）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemJointPropimgRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getId() const
;  void setId (qlonglong id);

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);

 QString getPicPath() const
;  void setPicPath (QString picPath);

 qlonglong getPosition() const
;  void setPosition (qlonglong position);

 QString getProperties() const
;  void setProperties (QString properties);


  virtual ItemJointPropimgResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 属性图片ID。如果是新增不需要填写
 **/
  qlonglong id;

/**
 * @brief 商品数字ID，必选
 **/
  qlonglong numIid;

/**
 * @brief 图片地址(传入图片相对地址即可,即不需包含 http://img02.taobao.net/bao/uploaded )
 **/
  QString picPath;

/**
 * @brief 图片序号
 **/
  qlonglong position;

/**
 * @brief 属性列表。调用taobao.itemprops.get.v2获取类目属性，属性必须是颜色属性，再用taobao.itempropvalues.get取得vid。格式:pid:vid。
 **/
  QString properties;

};

#endif  /* ITEMJOINTPROPIMGREQUEST_H */
