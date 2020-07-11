# http://qiita.com/ReSTARTR/items/f84f8f3c4c51c876cb2f


ROOT_DIR = File.expand_path '..', __FILE__
WORK_DIR = "#{ROOT_DIR}/keyboards/ergodox"
HEX_PATH = "#{ROOT_DIR}/.build/ergodox_ez_default.hex"
KEYMAP   = 'default'


def chdir (dir = nil, &block)
  if dir
    Dir.chdir dir do
      block.call
    end
  else
    block.call
  end
end

def make (*args, keymap: KEYMAP, dir: WORK_DIR)
  chdir dir do
    sh %( make #{args.join ' '} keymap=#{KEYMAP} )
  end
end


task :default => :build

task :install => :build do
  make :teensy
end

task :build => HEX_PATH

file HEX_PATH do
  make
end

task :clean do
  make :clean
end
