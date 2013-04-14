#ifndef ITEMJOINTIMGREQUEST_H
#define ITEMJOINTIMGREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemJointImgResponse.h>

/**
 * TOP API: * 关联一张商品图片到num_iid指定的商品中 
    * 传入的num_iid所对应的商品必须属于当前会话的用户 
    * 商品图片关联在卖家身份和图片来源上的限制，卖家要是B卖家或订购了多图服务才能关联图片，并且图片要来自于卖家自己的图片空间才行 
    * 商品图片数量有限制。不管是上传的图片还是关联的图片，他们的总数不能超过一定限额
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemJointImgRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getId() const
;  void setId (qlonglong id);

 bool getIsMajor() const
;  void setIsMajor (bool isMajor);

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);

 QString getPicPath() const
;  void setPicPath (QString picPath);

 qlonglong getPosition() const
;  void setPosition (qlonglong position);


  virtual ItemJointImgResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品图片id(如果是更新图片，则需要传该参数)
 **/
  qlonglong id;

/**
 * @brief 上传的图片是否关联为商品主图
 **/
  bool isMajor;

/**
 * @brief 商品数字ID，必选
 **/
  qlonglong numIid;

/**
 * @brief 图片URL,图片空间图片的相对地址
 **/
  QString picPath;

/**
 * @brief 图片序号
 **/
  qlonglong position;

};

#endif  /* ITEMJOINTIMGREQUEST_H */
