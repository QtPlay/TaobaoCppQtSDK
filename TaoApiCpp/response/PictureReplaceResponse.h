#ifndef PICTUREREPLACERESPONSE_H
#define PICTUREREPLACERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 替换一张图片，只替换图片数据，图片名称，图片分类等保持不变。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureReplaceResponse : public TaoResponse
{
public:
 virtual ~PictureReplaceResponse() { }

  bool getDone() const;
  void setDone (bool done);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 图片替换是否成功
 **/
  bool done;

};

#endif
