#ifndef PICTUREUPDATERESPONSE_H
#define PICTUREUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 修改指定图片的图片名
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureUpdateResponse : public TaoResponse
{
public:
 virtual ~PictureUpdateResponse() { }

  bool getDone() const;
  void setDone (bool done);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 更新是否成功
 **/
  bool done;

};

#endif
