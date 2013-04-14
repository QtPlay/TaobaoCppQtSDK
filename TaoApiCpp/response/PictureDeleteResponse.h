#ifndef PICTUREDELETERESPONSE_H
#define PICTUREDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 删除图片空间图片
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureDeleteResponse : public TaoResponse
{
public:
 virtual ~PictureDeleteResponse() { }

  bool getSuccess() const;
  void setSuccess (bool success);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 是否删除
 **/
  bool success;

};

#endif
