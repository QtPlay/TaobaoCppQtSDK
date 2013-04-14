#ifndef SIMBACREATIVEUPDATERESPONSE_H
#define SIMBACREATIVEUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/CreativeRecord.h>


/**
 * @brief TOP RESPONSE API: 更新一个创意的信息，可以设置创意标题、创意图片
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCreativeUpdateResponse : public TaoResponse
{
public:
 virtual ~SimbaCreativeUpdateResponse() { }

  CreativeRecord getCreativerecord() const;
  void setCreativerecord (CreativeRecord creativerecord);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 创意修改记录对象
 **/
  CreativeRecord creativerecord;

};

#endif
