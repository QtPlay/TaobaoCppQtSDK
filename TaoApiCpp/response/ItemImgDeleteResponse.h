#ifndef ITEMIMGDELETERESPONSE_H
#define ITEMIMGDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ItemImg.h>


/**
 * @brief TOP RESPONSE API: 删除itemimg_id 所指定的商品图片  
传入的num_iid所对应的商品必须属于当前会话的用户  
itemimg_id对应的图片需要属于num_iid对应的商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemImgDeleteResponse : public TaoResponse
{
public:
 virtual ~ItemImgDeleteResponse() { }

  ItemImg getItemImg() const;
  void setItemImg (ItemImg itemImg);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商品图片结构
 **/
  ItemImg itemImg;

};

#endif
