#ifndef ITEMJOINTIMGRESPONSE_H
#define ITEMJOINTIMGRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ItemImg.h>


/**
 * @brief TOP RESPONSE API: * 关联一张商品图片到num_iid指定的商品中 
    * 传入的num_iid所对应的商品必须属于当前会话的用户 
    * 商品图片关联在卖家身份和图片来源上的限制，卖家要是B卖家或订购了多图服务才能关联图片，并且图片要来自于卖家自己的图片空间才行 
    * 商品图片数量有限制。不管是上传的图片还是关联的图片，他们的总数不能超过一定限额
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemJointImgResponse : public TaoResponse
{
public:
 virtual ~ItemJointImgResponse() { }

  ItemImg getItemImg() const;
  void setItemImg (ItemImg itemImg);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商品图片信息
 **/
  ItemImg itemImg;

};

#endif
