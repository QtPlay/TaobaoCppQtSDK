#ifndef RODUCTSPECGETRESPONSE_H
#define RODUCTSPECGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ProductSpec.h>


/**
 * @brief TOP RESPONSE API: 通过当个的spec_id获取到这个产品规格的信息，主要是因为产品规格是要经过审核的，所以通过这个接口可以获取到是否通过审核 
通过参看这个ProductSpec的status判断： 
1:表示审核通过 
3:表示等待审核。 
如果你的id找不到数据，那么就是审核被拒绝。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RoductSpecGetResponse : public TaoResponse
{
public:
 virtual ~RoductSpecGetResponse() { }

  ProductSpec getProductSpec() const;
  void setProductSpec (ProductSpec productSpec);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回的产品规格信息，注意，这个产品规格信息可能是等待审核的，不一定可用。根据状态判断1：表示审核通过 
3：表示等待审核。
 **/
  ProductSpec productSpec;

};

#endif
