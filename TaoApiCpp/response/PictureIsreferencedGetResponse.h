#ifndef PICTUREISREFERENCEDGETRESPONSE_H
#define PICTUREISREFERENCEDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 查询图片是否被引用，被引用返回true，未被引用返回false
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureIsreferencedGetResponse : public TaoResponse
{
public:
 virtual ~PictureIsreferencedGetResponse() { }

  bool getIsReferenced() const;
  void setIsReferenced (bool isReferenced);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 图片是否被引用
 **/
  bool isReferenced;

};

#endif
