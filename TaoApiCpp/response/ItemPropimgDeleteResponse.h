#ifndef ITEMPROPIMGDELETERESPONSE_H
#define ITEMPROPIMGDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/PropImg.h>


/**
 * @brief TOP RESPONSE API: 删除propimg_id 所指定的商品属性图片  
传入的num_iid所对应的商品必须属于当前会话的用户  
propimg_id对应的属性图片需要属于num_iid对应的商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemPropimgDeleteResponse : public TaoResponse
{
public:
 virtual ~ItemPropimgDeleteResponse() { }

  PropImg getPropImg() const;
  void setPropImg (PropImg propImg);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 属性图片结构
 **/
  PropImg propImg;

};

#endif
